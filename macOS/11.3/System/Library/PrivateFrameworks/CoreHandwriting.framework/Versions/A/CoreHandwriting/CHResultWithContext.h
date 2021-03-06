/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/Versions/A/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CHMutableTokenizedTextResult;

@interface CHResultWithContext : NSObject {

	int _contentType;
	NSString* _leftContext;
	CHMutableTokenizedTextResult* _result;

}

@property (nonatomic,retain) NSString * leftContext;                             //@synthesize leftContext=_leftContext - In the implementation block
@property (assign) int contentType;                                              //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) CHMutableTokenizedTextResult * result;              //@synthesize result=_result - In the implementation block
-(void)dealloc;
-(CHMutableTokenizedTextResult *)result;
-(void)setResult:(CHMutableTokenizedTextResult *)arg1 ;
-(int)contentType;
-(void)setContentType:(int)arg1 ;
-(void)setLeftContext:(NSString *)arg1 ;
-(NSString *)leftContext;
-(id)initWithResult:(id)arg1 leftContext:(id)arg2 contentType:(int)arg3 ;
@end

