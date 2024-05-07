package id.posgram.belajar_kmp

import kotlinx.coroutines.CoroutineScope


expect open class BaseViewModel() {

    val scope: CoroutineScope
}