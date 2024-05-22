package id.posgram.belajar_kmp.android

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.compose.foundation.background
import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.runtime.SideEffect
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.navigation.NavController
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.google.accompanist.systemuicontroller.rememberSystemUiController
import id.posgram.belajar_kmp.Platform
import id.posgram.belajar_kmp.android.screens.AboutScreen
import id.posgram.belajar_kmp.android.screens.ArticlesScreen
import id.posgram.belajar_kmp.android.screens.SourcesScreen
import id.posgram.belajar_kmp.android.utils.Route

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        Platform().logSystemInfo()
        setContent {
            MyApplicationTheme {
                val scope = rememberCoroutineScope()
                val isSystemInDarkMode = isSystemInDarkTheme()
                val systemUiColor = rememberSystemUiController()
                SideEffect {
                    systemUiColor.setSystemBarsColor(
                        color = Color.Transparent,
                        darkIcons = !isSystemInDarkMode
                    )
                }

                Scaffold(
                    modifier = Modifier
                        .background(MaterialTheme.colorScheme.background)
                        .fillMaxSize()
                ) {
                    val bottomPadding = it.calculateBottomPadding()
                    val navController = rememberNavController()
                    NavHost(
                        navController = navController,
                        startDestination = Route.ArticleScreen.route
                    ) {

                        composable(route = Route.ArticleScreen.route) {
                            ArticlesScreen(
                                onSourcesButtonClick = {
                                    naviateToSourcesScreen(navController)
                                },
                                onAboutButtonClick = {
                                    navigateToAboutScreen(
                                        navController
                                    )
                                })
                        }

                        composable(route = Route.AboutScreen.route) {
                            AboutScreen(navigateUp = { navController.navigateUp() })
                        }

                        composable(route = Route.SourceScreen.route) {
                            SourcesScreen(navigateUp = { navController.navigateUp() })
                        }
                    }
                }
            }
        }
    }
}

private fun navigateToAboutScreen(navController: NavController) {
    navController.navigate(
        route = Route.AboutScreen.route
    )

}

private fun naviateToSourcesScreen(navController: NavController) {
    navController.navigate(
        route = Route.SourceScreen.route
    )
}

