/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSText.framework/Versions/A/TSText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSText/TSText-Structs.h>
#import <TSDrawables/TSDRep.h>
#import <TSText/TSDContainerRep.h>

@protocol TSKSearchReference;
@class TSWPShapeRep, NSObject, NSArray, NSString;

@interface TSWPTextHostRep : TSDRep <TSDContainerRep> {

	TSWPShapeRep* _editingRep;
	char _useFindOverlayers;
	NSObject*<TSKSearchReference> _primaryFindResultSearchReference;
	NSArray* _searchReferences;

}

@property (nonatomic,retain) NSObject*<TSKSearchReference> primaryFindResultSearchReference;              //@synthesize primaryFindResultSearchReference=_primaryFindResultSearchReference - In the implementation block
@property (nonatomic,readonly) char useFindOverlayers;                                                    //@synthesize useFindOverlayers=_useFindOverlayers - In the implementation block
@property (nonatomic,retain) NSArray * searchReferences;                                                  //@synthesize searchReferences=_searchReferences - In the implementation block
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)finishInit;
-(void)willBeRemoved;
-(NSObject*<TSDContainerInfo>)containerInfo;
-(id)childReps;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)updateChildrenFromLayout;
-(NSArray *)searchReferences;
-(void)setSearchReferences:(NSArray *)arg1 ;
-(char)useFindOverlayers;
-(void)drawTextBackground:(CGContextRef)arg1 insetRect:(CGRect)arg2 pulsating:(char)arg3 ;
-(void)drawTextBackground:(CGContextRef)arg1 insetRect:(CGRect)arg2 pulsating:(char)arg3 shouldTint:(char)arg4 ;
-(NSObject*<TSKSearchReference>)primaryFindResultSearchReference;
-(void)setPrimaryFindResultSearchReference:(NSObject*<TSKSearchReference>)arg1 ;
@end
