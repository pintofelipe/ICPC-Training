import java.util.Stack;

public class ValidadorExpresion {

    public static boolean estaBalanceada(String expresion) {
        Stack<Character> pila = new Stack<>();

        for (char c : expresion.toCharArray()) {
            // Si es un símbolo de apertura, se apila
            if (c == '(' || c == '{' || c == '[') {
                pila.push(c);
            }
            // Si es un símbolo de cierre, se desapila y se verifica
            else if (c == ')' || c == '}' || c == ']') {
                if (pila.isEmpty()) {
                    return false; // hay cierre sin apertura
                }

                char tope = pila.pop();

                if ((c == ')' && tope != '(') ||
                    (c == '}' && tope != '{') ||
                    (c == ']' && tope != '[')) {
                    return false; // los símbolos no coinciden
                }
            }
        }

        // Si al final la pila está vacía, está balanceada
        return pila.isEmpty();
    }

    public static void main(String[] args) {
        String exp1 = "{[()]}";                   // balanceada
        String exp2 = "{[(2+3)*5]-[4/2]}";       // balanceada
        String exp3 = "{[(2+3]*5)-4/2}";         // no balanceada
        String exp4 = "((()))";                  // balanceada
        String exp5 = "((())";                   // no balanceada

        System.out.println(exp1 + " -> " + estaBalanceada(exp1));
        System.out.println(exp2 + " -> " + estaBalanceada(exp2));
        System.out.println(exp3 + " -> " + estaBalanceada(exp3));
        System.out.println(exp4 + " -> " + estaBalanceada(exp4));
        System.out.println(exp5 + " -> " + estaBalanceada(exp5));
    }
}