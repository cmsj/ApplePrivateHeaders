/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADDrawable.h>

@class ODDNodePoint, ODDColorTransform, ODDStyleDefinition, NSArray;

@interface ODDDiagram : OADDrawable {

	ODDNodePoint* mDocumentPoint;
	ODDColorTransform* mColorTransform;
	ODDStyleDefinition* mStyleDefinition;
	NSArray* mEquivalentDrawables;

}

@property (nonatomic,retain) NSArray * equivalentDrawables; 
-(id)description;
-(id)init;
-(id)colorTransform;
-(id)documentPoint;
-(id)styleDefinition;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)setEquivalentDrawables:(NSArray *)arg1 ;
-(void)setDocumentPoint:(id)arg1 ;
-(NSArray *)equivalentDrawables;
@end
