/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface CNUICoreContactScratchpad : NSObject {

	NSSet* _edits;

}

@property (nonatomic,readonly) NSSet * edits;                         //@synthesize edits=_edits - In the implementation block
@property (nonatomic,readonly) NSSet * allContacts; 
@property (nonatomic,readonly) NSSet * modifiedContacts; 
+(id)scratchpadBySettingModifiedContact:(id)arg1 onExistingEditInScratchpad:(id)arg2 ;
+(id)scratchpadByAddingUneditedContact:(id)arg1 toScratchpad:(id)arg2 ;
+(id)scratchpadByRemovingModifiedContact:(id)arg1 fromScratchpad:(id)arg2 ;
+(id)editMatchingContact:(id)arg1 inEdits:(id)arg2 ;
+(id)editsByReplacingEdit:(id)arg1 withUpdatedEdit:(id)arg2 inEdits:(id)arg3 ;
+(id)emptyScratchpad;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSSet *)allContacts;
-(id)initWithEdits:(id)arg1 ;
-(char)containsContact:(id)arg1 ;
-(id)scratchpadByRemovingContacts:(id)arg1 ;
-(id)scratchpadByAddingContacts:(id)arg1 ;
-(NSSet *)edits;
-(id)modifiedContactForContact:(id)arg1 ;
-(id)scratchpadByKeepingContacts:(id)arg1 ;
-(id)modifiedIfPresentOtherwiseOriginalContactForContact:(id)arg1 ;
-(NSSet *)modifiedContacts;
@end

