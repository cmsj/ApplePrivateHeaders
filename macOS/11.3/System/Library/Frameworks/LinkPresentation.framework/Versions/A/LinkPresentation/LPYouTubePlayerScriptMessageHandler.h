/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/Versions/A/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@class LPYouTubePlayerView, NSString;

@interface LPYouTubePlayerScriptMessageHandler : NSObject <WKScriptMessageHandler> {

	LPYouTubePlayerView* _playerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
-(id)initWithPlayerView:(id)arg1 ;
@end
