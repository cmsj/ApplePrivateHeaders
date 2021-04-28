/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/Versions/A/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNMeContactComparisonStrategy.h>

@class NSSet, NSString;

@interface CNUIMeContactComparisonStrategyUnified : NSObject <CNMeContactComparisonStrategy> {

	NSSet* _meContactIdentifiersFound;

}

@property (nonatomic,retain) NSSet * meContactIdentifiersFound;              //@synthesize meContactIdentifiersFound=_meContactIdentifiersFound - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isMeContact:(id)arg1 ;
-(id)meContactIdentifiers;
-(void)meContactChangedInStore:(id)arg1 ;
-(id)identifierAndLinkIdentifierAndLinkedContactIdentifiersFromContact:(id)arg1 ;
-(void)setMeContactIdentifiersFound:(NSSet *)arg1 ;
-(NSSet *)meContactIdentifiersFound;
@end
