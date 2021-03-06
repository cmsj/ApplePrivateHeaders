/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AddressBookCore.framework/Versions/A/AddressBookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookCore/ABVCardFileSerializer.h>

@class NSMutableArray, NSFileHandle, NSURL;

@interface ABVCardSingleFileSerializer : ABVCardFileSerializer {

	NSMutableArray* _names;
	char _usePeopleNamesAsName;
	NSFileHandle* _cardHandle;
	NSURL* _cardURL;

}

@property (copy) NSURL * cardURL;              //@synthesize cardURL=_cardURL - In the implementation block
+(id)serializerWithBasePath:(id)arg1 names:(id)arg2 ;
-(void)dealloc;
-(id)initWithBasePath:(id)arg1 ;
-(id)makeProgress;
-(void)serializePersonWithName:(id)arg1 vCardData:(id)arg2 ;
-(void)serializePeople:(id)arg1 ;
-(void)overrideNames:(id)arg1 ;
-(void)setCardURL:(NSURL *)arg1 ;
-(NSURL *)cardURL;
@end

