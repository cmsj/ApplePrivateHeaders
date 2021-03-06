/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSKit.framework/Versions/A/TSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>

@class NSMutableSet, NSSet;

@interface TSKAnnotationAuthorStorage : TSPObject {

	NSMutableSet* _mutableAuthors;

}

@property (nonatomic,retain) NSMutableSet * mutableAuthors;              //@synthesize mutableAuthors=_mutableAuthors - In the implementation block
@property (readonly) NSSet * authors; 
-(id)description;
-(NSSet *)authors;
-(void)addAuthor:(id)arg1 ;
-(id)packageLocator;
-(char)shouldDelayArchiving;
-(unsigned)delayedArchivingPriority;
-(void)removeAuthor:(id)arg1 ;
-(id)nextAuthorColor;
-(void)didAddAuthorRelationshipToDocument;
-(void)didRemoveAuthorRelationshipFromDocument;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)authorInStorageAddingAuthorIfNecessary:(id)arg1 ;
-(id)authorInStorageMatchingAuthor:(id)arg1 ;
-(NSMutableSet *)mutableAuthors;
-(void)setMutableAuthors:(NSMutableSet *)arg1 ;
-(id)authorsMatchingPrivateID:(id)arg1 ;
-(char)p_withToleranceDoesColorSet:(id)arg1 containColor:(id)arg2 ;
-(long long)p_hashCodeForColorKey:(id)arg1 ;
-(long long)indexForColorKey:(id)arg1 usedColors:(id)arg2 ;
-(id)preferredAuthorMatchingPrivateID:(id)arg1 name:(id)arg2 ;
-(id)currentAuthorColorWithKey:(id)arg1 ;
@end

