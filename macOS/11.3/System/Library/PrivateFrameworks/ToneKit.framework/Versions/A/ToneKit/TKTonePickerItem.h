/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/Versions/A/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/TKPickerSelectableItem.h>
#import <libobjc.A.dylib/TKPickerContainerItem.h>

@class TKTonePickerSectionItem, NSArray, NSString;

@interface TKTonePickerItem : TKPickerSelectableItem <TKPickerContainerItem> {

	char _needsRoomForCheckmark;
	char _needsActivityIndicator;
	char _needsDownloadProgress;
	float _downloadProgress;
	unsigned long long _itemKind;
	TKTonePickerSectionItem* _parentSectionItem;
	NSArray* _childrenToneClassicsPickerItems;

}

@property (assign,setter=_setParentSectionItem:,nonatomic,__weak) TKTonePickerSectionItem * parentSectionItem;                 //@synthesize parentSectionItem=_parentSectionItem - In the implementation block
@property (setter=_setChildrenToneClassicsPickerItems:,nonatomic,copy) NSArray * childrenToneClassicsPickerItems;              //@synthesize childrenToneClassicsPickerItems=_childrenToneClassicsPickerItems - In the implementation block
@property (assign,setter=_setItemKind:,nonatomic) unsigned long long itemKind;                                                 //@synthesize itemKind=_itemKind - In the implementation block
@property (assign,setter=_setNeedsRoomForCheckmark:,nonatomic) char needsRoomForCheckmark;                                     //@synthesize needsRoomForCheckmark=_needsRoomForCheckmark - In the implementation block
@property (assign,setter=_setNeedsActivityIndicator:,nonatomic) char needsActivityIndicator;                                   //@synthesize needsActivityIndicator=_needsActivityIndicator - In the implementation block
@property (assign,setter=_setNeedsDownloadProgress:,nonatomic) char needsDownloadProgress;                                     //@synthesize needsDownloadProgress=_needsDownloadProgress - In the implementation block
@property (assign,setter=_setDownloadProgress:,nonatomic) float downloadProgress;                                              //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,readonly) long long numberOfChildren; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)childItemAtIndex:(long long)arg1 ;
-(float)downloadProgress;
-(long long)numberOfChildren;
-(unsigned long long)itemKind;
-(void)_setDownloadProgress:(float)arg1 ;
-(void)_appendDescriptionOfAttributesToString:(id)arg1 ;
-(void)_setItemKind:(unsigned long long)arg1 ;
-(TKTonePickerSectionItem *)parentSectionItem;
-(void)_setParentSectionItem:(id)arg1 ;
-(char)needsRoomForCheckmark;
-(void)_setNeedsRoomForCheckmark:(char)arg1 ;
-(char)needsActivityIndicator;
-(void)_setNeedsActivityIndicator:(char)arg1 ;
-(char)needsDownloadProgress;
-(void)_setNeedsDownloadProgress:(char)arg1 ;
-(NSArray *)childrenToneClassicsPickerItems;
-(void)_setChildrenToneClassicsPickerItems:(id)arg1 ;
@end

