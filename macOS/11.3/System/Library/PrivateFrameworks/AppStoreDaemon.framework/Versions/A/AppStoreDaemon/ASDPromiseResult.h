/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface ASDPromiseResult : NSObject {

	NSError* _error;
	id _value;

}

@property (readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (readonly) id value;                     //@synthesize value=_value - In the implementation block
+(id)resultWithError:(id)arg1 ;
+(id)resultWithValue:(id)arg1 ;
-(id)init;
-(NSError *)error;
-(id)value;
-(id)_initWithValue:(id)arg1 error:(id)arg2 ;
@end
