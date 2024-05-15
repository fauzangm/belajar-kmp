package id.posgram.belajar_kmp.android.utils

sealed class Route(
    val route: String
) {
    object ArticleScreen : Route(route = "articleScreen" )
    object AboutScreen : Route(route = "aboutScreen" )
}