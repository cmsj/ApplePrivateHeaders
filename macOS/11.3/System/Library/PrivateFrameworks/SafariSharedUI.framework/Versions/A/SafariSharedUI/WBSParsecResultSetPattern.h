/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/Versions/A/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRegularExpression;

@interface WBSParsecResultSetPattern : NSObject {

	NSRegularExpression* _regularExpression;

}
+(id)_regularExpressionPatternForToken:(id)arg1 ;
+(id)_nextTokenInResultSetPattern:(id)arg1 ;
+(id)_regularExpressionPatternForResultSetPatternSuffix:(id)arg1 ;
+(id)_regularExpressionPatternFromResultSetPattern:(id)arg1 ;
+(id)patternWithString:(id)arg1 ;
-(char)isMatchedByString:(id)arg1 ;
-(id)_initWithRegularExpression:(id)arg1 ;
@end
