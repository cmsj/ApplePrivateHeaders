/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/Versions/A/PlugInKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKSandboxExtension : NSObject {

	long long _handle;
	NSString* _token;

}

@property (nonatomic,readonly) NSString * token;              //@synthesize token=_token - In the implementation block
@property (assign) long long handle;                          //@synthesize handle=_handle - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(long long)handle;
-(NSString *)token;
-(void)setHandle:(long long)arg1 ;
-(id)initWithExtension:(id)arg1 ;
-(void)consume;
-(void)expel;
@end

