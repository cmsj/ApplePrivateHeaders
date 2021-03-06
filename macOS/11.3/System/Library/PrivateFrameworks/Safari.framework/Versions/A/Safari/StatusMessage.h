/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface StatusMessage : NSObject {

	NSURL* _url;
	NSString* _string;

}

@property (getter=isEmpty,readonly) char empty; 
@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
+(char)isEmpty:(id)arg1 ;
+(id)emptyMessage;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)string;
-(char)isEmpty;
-(id)initWithString:(id)arg1 ;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 string:(id)arg2 ;
@end

