//
//  BitlyConfig.h
//  BitlyLib
//
//  Created by Tracy Pesin on 8/4/11.
//  Copyright 2011 Betaworks. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BitlyConfig 

extern NSString *BitlyLogin;
extern NSString *BitlyApiKey;

extern NSString *BitlyTwitterOAuthConsumerKey;
extern NSString *BitlyTwitterOAuthConsumerSecret;
extern NSString *BitlyTwitterOAuthSuccessCallbackURL;

extern NSString * const BitlyTwitterRequestTokenURL;
extern NSString * const BitlyTwitterAccessTokenURL;
extern NSString * const BitlyTwitterAuthorizeURLFormat;


/** BITLY CREDENTIALS **/
/* These are your api keys to bitly. They can be created at http://bitly.com/a/sign_up 
 */
+ (void)setBitlyLogin:(NSString *)bitlyLogin bitlyApiKey:(NSString *)bitlyApiKey;




/** TWITTER CREDENTIALS **/
/*These are your api keys to twitter. They can be created at https://dev.twitter.com/apps/ 
IMPORTANT: You must set a callback URL, even though the user will never see that page. The application will intercept redirects to that URL and act accordingly. As an example, our project uses @"http://twitterauthsuccess.bit.ly";
*/
+ (void)setTwitterOAuthConsumerKey:(NSString *)consumerKey 
twitterOAuthConsumerSecret:(NSString *)consumerSecret 
twitterOAuthSuccessCallbackURL:(NSString *)successCallbackURL;

@end
