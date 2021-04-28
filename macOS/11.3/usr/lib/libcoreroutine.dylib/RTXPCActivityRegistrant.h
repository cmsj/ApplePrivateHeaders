/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RTXPCActivityCriteria;

@interface RTXPCActivityRegistrant : NSObject {

	NSString* _identifier;
	RTXPCActivityCriteria* _criteria;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) RTXPCActivityCriteria * criteria;              //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,copy,readonly) id handler;                               //@synthesize handler=_handler - In the implementation block
-(id)description;
-(id)init;
-(NSString *)identifier;
-(id)handler;
-(id)initWithIdentifier:(id)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTXPCActivityCriteria *)criteria;
@end
