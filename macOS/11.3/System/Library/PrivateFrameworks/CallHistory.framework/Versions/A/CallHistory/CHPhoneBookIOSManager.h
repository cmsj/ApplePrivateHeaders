/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Versions/A/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CHPhoneBookManagerProtocol.h>

@class CNContactStore, NSString;

@interface CHPhoneBookIOSManager : NSObject <CHPhoneBookManagerProtocol> {

	CNContactStore* _fContactsStore;

}

@property (nonatomic,retain) CNContactStore * fContactsStore;              //@synthesize fContactsStore=_fContactsStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)get;
-(id)init;
-(void)fetchAndCacheContactIdentifiersForCalls:(id)arg1 ;
-(id)fetchCNContactsMatchingPredicate:(id)arg1 keysToKetch:(id)arg2 error:(id*)arg3 ;
-(id)fetchCNContact:(id)arg1 countryCode:(id)arg2 isEmail:(char)arg3 ;
-(CNContactStore *)fContactsStore;
-(id)fetchContactIdentifiersForHandles:(id)arg1 error:(id*)arg2 ;
-(id)getRecordId:(id)arg1 countryCode:(id)arg2 isEmail:(char)arg3 ;
-(id)fetchFullCNContactForContactIdentifier:(id)arg1 isEmail:(char)arg2 ;
-(id)getPersonsNameForContact:(id)arg1 ;
-(id)getLocalizedCallerIdLabelForContact:(id)arg1 forCallerId:(id)arg2 withCallerIdIsEmail:(char)arg3 ;
-(char)isABContactASuggestion;
-(void)setFContactsStore:(CNContactStore *)arg1 ;
@end

