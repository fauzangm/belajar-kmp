package id.posgram.belajar_kmp.android

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.viewModels
import androidx.compose.foundation.background
import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.MaterialTheme
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Surface
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.SideEffect
import androidx.compose.runtime.rememberCoroutineScope
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.navigation.NavController
import androidx.navigation.NavGraph
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.rememberNavController
import com.google.accompanist.systemuicontroller.rememberSystemUiController
import id.posgram.belajar_kmp.Platform
import id.posgram.belajar_kmp.android.screens.AboutScreen
import id.posgram.belajar_kmp.android.screens.ArticlesScreen
import id.posgram.belajar_kmp.android.utils.Route
import id.posgram.belajar_kmp.articles.ArticlesViewModel
import kotlinx.coroutines.launch

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
                            val articlesViewModel: ArticlesViewModel by viewModels()
                            ArticlesScreen(onAboutButtonClick = {
                                navigateToAboutScreen(
                                    navController
                                )
                            }, articlesViewModel = articlesViewModel)
                        }

                        composable(route = Route.AboutScreen.route) {
                            AboutScreen(navigateUp = { navController.navigateUp() })
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

@Composable
fun GreetingView(text: String) {
    Text(text = text)
}

//@Preview
//@Composable
//fun DefaultPreview() {
//    MyApplicationTheme {
//        AboutScreen()
//    }
//}
