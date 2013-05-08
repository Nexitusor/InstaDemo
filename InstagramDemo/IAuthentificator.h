//
//  IAuthentificator.h
//  InstagramDemo
//

//  Copyright (c) Nexitusor. All rights reserved.
//

////////////////ВНИМАНИЕ!///////////
//Перед началом использования заменить scope,callbackURL,clientID,clientSecret на свои 

#import <Foundation/Foundation.h>

#define scope @"basic+likes+comments+relationships"
#define callbackURL @"YOUR CALLBACK URL"
#define clientID @"YOUR CLIENT ID"
#define clientSecret @"YOUR  CLIENT SECRET"

#define HideNetworkActivityIndicator() [UIApplication sharedApplication].networkActivityIndicatorVisible = NO
#define ShowNetworkActivityIndicator() [UIApplication sharedApplication].networkActivityIndicatorVisible = YES

@protocol InstagramAuth <NSObject>
-(void) didAuth:(NSMutableString*)token;
@end


@interface IAuthentificator : UIViewController <UIWebViewDelegate,NSURLConnectionDelegate,NSURLConnectionDataDelegate>

{
    NSMutableString *accessToken;
    UIWebView *webView;
    NSURLConnection *connection;
    NSMutableData *mdata;
   __weak id<InstagramAuth>iDelegate;
    
}
@property (nonatomic,strong) NSMutableString *accessToken;
@property (nonatomic,readonly) UIWebView *webView;
@property (nonatomic,strong) NSString *code;
@property (nonatomic,strong) NSURLConnection *connection;
@property (nonatomic,strong) NSMutableData *mdata;
@property (nonatomic,weak) id<InstagramAuth>iDelegate;



@end

