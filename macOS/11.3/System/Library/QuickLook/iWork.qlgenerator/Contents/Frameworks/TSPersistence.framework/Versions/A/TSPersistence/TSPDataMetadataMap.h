/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPObject.h>

@class NSMutableDictionary;

@interface TSPDataMetadataMap : TSPObject {

	NSMutableDictionary* _identifierToDataMetadata;

}
-(id)initWithContext:(id)arg1 ;
-(void)saveToMessage:(DataMetadataMap*)arg1 archiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromMessage:(const DataMetadataMap*)arg1 unarchiver:(id)arg2 ;
-(void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2 ;
-(id)dataMetadataForDataIdentifier:(long long)arg1 ;
@end
