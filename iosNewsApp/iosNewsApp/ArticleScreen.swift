//
//  ArticleScreen.swift
//  iosNewsApp
//
//  Created by Fauzan Ghozi Mubarak on 10/05/24.
//  Copyright © 2024 orgName. All rights reserved.
//

import SwiftUI
import shared
import Foundation

struct ArticlesScreen: View {
    
    @ObservedObject var viewModel: ArticlesViewModel = ArticlesViewModel()
    
    @State private var showAlert: Bool = false
    @State private var isLoading : Bool = false
    @State private var isError : Bool  = false
    @State private var isSucces : Bool = false
    
    var body: some View {
        VStack {
            AppBar()
            if (isLoading) {
                Loader()
            } else if (isError) {
                ErrorMessage(message: viewModel.articlesState.value!.error ?? "Default Error")
            } else if (isSucces) {
                ScrollView {
                    LazyVStack(spacing: 10) {
                        ForEach(viewModel.articlesState.value!.articles, id: \.self) { article in
                            ArticleItemView(article: article)
                        }
                    }
                }
            }
        }
        .onAppear {
            viewModel.getArticles()
            viewModel.articlesState.subscribe{ state in
                if((state?.loading) != nil){
                    isLoading = state?.loading ?? false
                    print("loading state \(state?.loading)")
                }
                if(((state?.error?.isEmpty) != nil)) {
                    isError = true
                    print("error message \(state?.error)")
                }
                if(!(state?.articles.isEmpty ?? false)){
                    isSucces = true
                    isError = false
                    
                }
                
                
            }
        }
    }
}

struct AppBar: View {
    var body: some View {
        Text("Articles")
            .font(.largeTitle)
            .fontWeight(.bold)
    }
}

struct ArticleItemView: View {
    var article: Article
    
    var body: some View {
        VStack(alignment: .leading, spacing: 8) {
            AsyncImage(url: URL(string: article.imageUrl)) { phase in
                if phase.image != nil {
                    phase.image!
                        .resizable()
                        .aspectRatio(contentMode: .fit)
                } else if phase.error != nil {
                    Text("Image Load Error")
                } else {
                    ProgressView()
                }
            }
            Text(article.title)
                .font(.title)
                .fontWeight(.bold)
            Text(article.desc)
            Text(article.date).frame(maxWidth: .infinity, alignment: .trailing).foregroundStyle(.gray)
        }
        .padding(16)
    }
}

struct Loader: View {
    var body: some View {
        ProgressView()
    }
}

struct ErrorMessage: View {
    var message: String
    
    var body: some View {
        Text(message)
            .font(.title)
    }
}
