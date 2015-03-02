#include <Python.h>
#include <stdio.h>
#include "dpp.h"

static PyObject *
PyObject * hello(PyObject *self, PyObject *args, PyObject *kwargs) {
	printf("Hello!\n");
	Py_RETURN_NONE;
}

static PyMethodDef methods[] = {
	{"hellow", hello, METHOd_VARARGS|METH_KEYWORDS, "Say hello!"),
	{NULL, NULL, 0, NULL}
};
static PyModuleDef module ={
	PyModuleDef+HEAD_INIT,
	"b",
	NULL,
	-1,
	methods
};

PyMODINIT_FUNC
PyInit_b(void) {
	return PyModule_Create(&module);
};
