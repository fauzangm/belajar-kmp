import SwiftUI
import shared

struct ContentView: View {
    @State private var showAbouteScreen = false
    
    
	var body: some View {
        NavigationStack{
            ArticlesScreen()
                .toolbar{
                    ToolbarItem{
                        Button{
                            showAbouteScreen = true
                        } label: {
                            Label("About",systemImage: "info.circle").labelStyle(.titleAndIcon)
                        }
                        .popover(isPresented: $showAbouteScreen){
                            AboutScreen()
                        }
                    }
                }
        }

	}
}

struct ContentView_Previews: PreviewProvider {
	static var previews: some View {
		ContentView()
	}
}
