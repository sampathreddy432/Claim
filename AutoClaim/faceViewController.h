//
//  faceViewController.h
//  AutoClaim
//
//  Created by sampath on 2015-03-07.
//  Copyright (c) 2015 sampath. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OAuthConsumer.h"
@interface faceViewController : UIViewController<UIWebViewDelegate>
{
    IBOutlet UIWebView *webview;
    OAConsumer* consumer;
    OAToken* requestToken;
    OAToken* accessToken;
}
@property (nonatomic,strong) OAToken* accessToken;
@property (nonatomic, retain) IBOutlet UIWebView *webview;
@property (nonatomic, retain) NSString *isLogin;
@end
