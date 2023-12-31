//
//  XESplashScreen.h
//  Xedit
//
//  Created by Mustafa Malik on 23/07/2023.
//

#ifndef XEDIT_UI_XESPLASHSCREEN_H
#define XEDIT_UI_XESPLASHSCREEN_H

#define XE_USE_COCOA
#define XE_USE_CONFIG

#import "XETools.h"

@interface XESplashScreen : NSObject<NSApplicationDelegate>
/*
 Main Window
 Left Side
 Right Side
 Logo and titles
 recent projects
*/

@property(nonatomic, readonly) int width;
@property(nonatomic, readonly) int height;

// DO NOT ACCESS ANY OF THE PROPERTIES BELOW
// DO NOT USE PUBLICLY
@property(atomic, readwrite) NSWindow* window;
@property(nonatomic, readwrite) NSStackView* mainStack;
@property(nonatomic, readwrite) NSStackView* leftStack;
@property(nonatomic, readwrite) NSStackView* rightStack;

// Synced with macOS system colour
- (void) createWelcomeWindow;
- (void) createMainStack;
- (void) createLeftView;
- (void) createRightView;
- (void) createRecentStack;

- (BOOL) canReadCachedProjects;
- (void) displayRecentProjects;

@end

#endif /* XEDIT_UI_XESPLASHSCREEN_H */
