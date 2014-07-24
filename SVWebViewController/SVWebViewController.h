//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import "SVModalWebViewController.h"

@interface SVWebViewController : UIViewController

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithURL:(NSURL*)URL;

/**
 * Disable buttons when page is loading. Sometimes page can load infinitly if page has many iframes or face other issues
 * in this case you maybe want to have action buttons te be available all the time
*/

/**
 * Disable Action button. Set NO to make Action button to bew anable all the time.
 * Default YES.
 */
@property (nonatomic, assign) BOOL disableActionsButtonWhenLoad;

/**
 * Always show realload button, even when page is loading. No way to calncel page that is loading.
 * Default NO
 */
@property (nonatomic, assign) BOOL alwaysShowReloadButton;

/**
 * Interface method for ModalWebView.
 */
- (void)doneButtonClicked:(id)sender;

@end
