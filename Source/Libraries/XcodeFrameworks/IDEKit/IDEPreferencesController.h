/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowRestoration-Protocol.h"

@class DVTExtension, DVTReplacementView;

@interface IDEPreferencesController : NSWindowController <NSWindowRestoration, NSToolbarDelegate>
{
    DVTReplacementView *_paneReplacementView;
    DVTExtension *_currentExtension;
}

+ (id)defaultPreferencesController;
+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(id)arg3;
- (void)_cachePreferencePaneExtensions;
- (void)_selectToolbarItem:(id)arg1;
@property DVTExtension *currentExtension; // @synthesize currentExtension=_currentExtension;
- (id)initWithWindow:(id)arg1;
@property(retain) DVTReplacementView *paneReplacementView; // @synthesize paneReplacementView=_paneReplacementView;
- (void)selectNextTab:(id)arg1;
- (void)selectPreferencePaneWithIdentifier:(id)arg1;
- (void)selectPreviousTab:(id)arg1;
- (void)showPreferencesPanel:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbarSelectableItemIdentifiers:(id)arg1;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;

@end

