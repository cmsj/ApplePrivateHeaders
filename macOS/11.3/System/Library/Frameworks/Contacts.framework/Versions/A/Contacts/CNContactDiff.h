/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Contacts.framework/Versions/A/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNContactDiff : NSObject {

	NSArray* _updates;

}

@property (copy,readonly) NSArray * updates;              //@synthesize updates=_updates - In the implementation block
+(id)diffContact:(id)arg1 to:(id)arg2 error:(id*)arg3 ;
+(char)hasExternalImageURIBeenChangedForContact:(id)arg1 ;
-(id)description;
-(id)initWithUpdates:(id)arg1 ;
-(NSArray *)updates;
-(void)applyToMutableContact:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)applyToABCDContact:(id)arg1 ;
-(id)contactByApplyingUpdatesToContact:(id)arg1 ;
-(void)applyToMutableContacts:(id)arg1 withIdentifierMap:(id)arg2 ;
-(void)resetExternalImageURIForContact:(id)arg1 ;
@end

