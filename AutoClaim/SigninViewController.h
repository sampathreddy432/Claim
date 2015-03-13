//
//  SigninViewController.h
//  AutoClaim
//
//  Created by sampath on 2015-02-23.
//  Copyright (c) 2015 sampath. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>
#import <GooglePlus/GooglePlus.h>
@interface SigninViewController : UIViewController<UITextFieldDelegate, GPPSignInDelegate, FBLoginViewDelegate>
@property (weak, nonatomic) IBOutlet UITextField *email;
@property (weak, nonatomic) IBOutlet UITextField *password;
- (IBAction)signin:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *confirm;
@property (weak, nonatomic) IBOutlet UIButton *signup;
- (IBAction)signup:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *btn;

- (IBAction)btn:(id)sender;
@end
