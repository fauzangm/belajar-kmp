//
//  AboutScreen.swift
//  iosNewsApp
//
//  Created by Fauzan Ghozi Mubarak on 06/05/24.
//  Copyright © 2024 orgName. All rights reserved.
//

import SwiftUI

struct AboutScreen: View {
    var body: some View {
        NavigationStack{
            AboutListView()
                .navigationTitle("About Device")
        }
    }
}

#Preview {
    AboutScreen()
}
