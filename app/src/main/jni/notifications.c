#include <jni.h>

//Links from MainActivity
JNIEXPORT jstring JNICALL Java_com_gold_kds517_smartviewmac_MainActivity_getZero(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "c21hcnR2MTk=");
}
//bXVsdGkx
JNIEXPORT jstring JNICALL Java_com_gold_kds517_smartviewmac_MainActivity_getOne(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "bXVsdGky");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_smartviewmac_MainActivity_getTwo(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "bXVsdGkz");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_smartviewmac_MainActivity_getThree(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "ovL3RoZXJhZGlvc2hhay5jby51aMWF5OXBjSFIyWDNBeEwybHVaR2FIUjBjRG92TDNSb1pYSmhaR2x2YzJoaGF5NWpieTUxYXk5cGNIUjJYM0F4TDJsdVpHVjRMbkJvY0Q5c2FXTmxibU5sWDJ0bGVUMXNhWFpsZEhZeQ==");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_smartviewmac_MainActivity_getFour(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "aHR0cDovL3RoZXJhZGlvc2YXk1amJ5NTFheTlwY0hSMlgzQXlMYUhSMGNEb3ZMM1JvWlhKaFpHbHZjMmhoYXk1amJ5NTFheTlwY0hSMlgzQXlMMmx1WkdWNExuQm9jRDlzYVdObGJtTmxYMnRsZVQxc2FYWmxkSFl5");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_smartviewmac_MainActivity_getFive(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "http://theradioshak.co.uk/multi1/icon.png");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_smartviewmac_MainActivity_getSix(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "http://theradioshak.co.uk/multi2/icon.png");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_smartviewmac_MainActivity_getSeven(JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "http://theradioshak.co.uk/multi3/icon.png");
}
JNIEXPORT jstring JNICALL Java_com_gold_kds517_smartviewmac_activity_LoginActivity_getLogin(
        JNIEnv *env, jobject instance){
    return (*env)->NewStringUTF(env, "%susername=%s&password=%s");
}