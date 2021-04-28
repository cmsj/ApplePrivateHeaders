/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:53:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSTables.framework/Versions/A/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <TSTables/TSTCellDiffing.h>
#import <TSTables/TSSPropertyCommandSerializing.h>

@class TSDCommentStorage, NSString;

@interface TSTCommentStorageWrapper : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing> {

	TSDCommentStorage* _commentStorage;

}

@property (nonatomic,readonly) TSDCommentStorage * commentStorage;              //@synthesize commentStorage=_commentStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellDiffProperties;
-(void)didInitFromSOS;
-(id)initFromPropertyCommandMessage:(const Message*)arg1 unarchiver:(id)arg2 ;
-(void)saveToPropertyCommandMessage:(Message*)arg1 archiver:(id)arg2 ;
-(TSDCommentStorage *)commentStorage;
-(id)objectByRemovingPropertiesInMap:(id)arg1 addingPropertiesInMap:(id)arg2 updateInverseResetPropertyMap:(id)arg3 updateInverseSetPropertyMap:(id)arg4 ;
-(void)applyToCell:(id)arg1 ;
-(id)initWithCommentStorage:(id)arg1 ;
@end
