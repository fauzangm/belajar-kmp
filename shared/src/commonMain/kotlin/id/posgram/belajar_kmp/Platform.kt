package id.posgram.belajar_kmp

expect class Platform {
    val osName : String
    val osVersion : String
    val deviceModel : String
    val density : Int

    fun logSystemInfo()
}