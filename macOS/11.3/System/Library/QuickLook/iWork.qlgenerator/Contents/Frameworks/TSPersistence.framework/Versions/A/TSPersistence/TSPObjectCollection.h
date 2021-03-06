/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>

@class NSArray;

@interface TSPObjectCollection : TSPObject {

	NSArray* _objects;

}

@property (nonatomic,readonly) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(NSArray *)objects;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)tsp_publicLoggingDescription;
-(id)initWithContext:(id)arg1 objects:(id)arg2 ;
@end

