/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SecurityFoundation.framework/Versions/A/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface _SFKeychainFetchResult : NSObject {

	id _keychainFetchResultInternal;

}

@property (readonly) long long resultType; 
@property (readonly) id value; 
@property (readonly) NSError * error; 
+(id)fetchResultWithValue:(id)arg1 ;
+(id)fetchResultWithError:(id)arg1 ;
-(void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(NSError *)error;
-(id)value;
-(id)initWithError:(id)arg1 ;
-(long long)resultType;
-(id)initWithValue:(id)arg1 ;
@end

