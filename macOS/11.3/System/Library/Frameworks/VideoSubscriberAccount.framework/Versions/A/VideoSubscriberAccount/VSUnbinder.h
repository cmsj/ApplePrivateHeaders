/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface VSUnbinder : NSObject {

	char _invalid;
	NSMapTable* _bindingsByBinder;

}

@property (assign,getter=isInvalid,nonatomic) char invalid;              //@synthesize invalid=_invalid - In the implementation block
@property (nonatomic,retain) NSMapTable * bindingsByBinder;              //@synthesize bindingsByBinder=_bindingsByBinder - In the implementation block
-(void)dealloc;
-(id)init;
-(char)isInvalid;
-(void)setInvalid:(char)arg1 ;
-(NSMapTable *)bindingsByBinder;
-(void)binder:(id)arg1 didEstablishBinding:(id)arg2 ;
-(void)binder:(id)arg1 didTearDownBinding:(id)arg2 ;
-(void)setBindingsByBinder:(NSMapTable *)arg1 ;
@end

