#include <GL/glut.h>

static float angle = 0.0f;  // 회전 각도를 저장하는 변수
static float rotationSpeed = 1.0f;  // 회전 속도

void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();  // 현재 변환 행렬을 초기화합니다.

    // 주전자를 자동으로 회전시키기 위해 각도를 증가시킵니다.
    angle += rotationSpeed;
    glRotatef(angle, 1.0f, 1.0f, 1.0f);  // 주전자를 회전시킵니다.

    glColor3f(1.0, 0.8, 0.6);  // 주전자의 색을 짙은 노란색으로 설정합니다.
    glutSolidTeapot(1.0);  // 크기가 1.0인 주전자를 그립니다.
    glutSwapBuffers();
}

void timer(int value) {
    glutPostRedisplay();  // 화면을 다시 그리도록 요청합니다.
    glutTimerFunc(16, timer, 0);  // 16ms 후에 다시 타이머 함수를 호출합니다.
}

int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(320,320);
    glutCreateWindow("OpenGL Teapot");

    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(renderScene);
    glutTimerFunc(16, timer, 0);  // 16ms 후에 타이머 함수를 호출합니다.

    glutMainLoop();

    return 1;
}
