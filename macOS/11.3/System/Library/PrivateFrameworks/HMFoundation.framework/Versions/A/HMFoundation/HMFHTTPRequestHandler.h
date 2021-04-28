/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/Versions/A/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSPredicate;

@interface HMFHTTPRequestHandler : HMFObject {

	NSPredicate* _methodPredicate;
	NSPredicate* _URLPredicate;
	/*^block*/id _matchBlock;
	/*^block*/id _requestBlock;

}

@property (nonatomic,copy,readonly) NSPredicate * methodPredicate;              //@synthesize methodPredicate=_methodPredicate - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * URLPredicate;                 //@synthesize URLPredicate=_URLPredicate - In the implementation block
@property (nonatomic,copy,readonly) id matchBlock;                              //@synthesize matchBlock=_matchBlock - In the implementation block
@property (nonatomic,copy) id requestBlock;                                     //@synthesize requestBlock=_requestBlock - In the implementation block
+(char)_isValidMethodPrediate:(id)arg1 ;
+(char)_isValidURLPredicate:(id)arg1 ;
-(id)init;
-(id)requestBlock;
-(id)initWithMethodPredicate:(id)arg1 URLPredicate:(id)arg2 matchBlock:(/*^block*/id)arg3 ;
-(NSPredicate *)methodPredicate;
-(NSPredicate *)URLPredicate;
-(id)matchBlock;
-(void)setRequestBlock:(id)arg1 ;
@end
