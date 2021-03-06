/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:59 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/SceneKit.framework/Versions/A/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <AppKit/NSView.h>

@class NSString, NSMutableArray, SCNUIArrayEditor, NSObjectController, NSPathControl;

@interface SCNUIDynamicInspector : NSView {

	id _instance;
	NSString* _modelPath;
	NSMutableArray* _modelPathComponents;
	NSMutableArray* _stack;
	SCNUIArrayEditor* _pendingAllocationListener;
	NSObjectController* _objectController;
	NSPathControl* stackControl;

}

@property (retain) id instance; 
@property (assign,nonatomic,__weak) NSObjectController * objectController;              //@synthesize objectController=_objectController - In the implementation block
@property (nonatomic,retain) NSPathControl * stackControl; 
-(id)initWithCoder:(id)arg1 ;
-(void)clear;
-(id)instance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)commonInit;
-(void)setInstance:(id)arg1 ;
-(void)setup;
-(void)instanceWillChange;
-(void)instanceDidChange;
-(NSPathControl *)stackControl;
-(void)updateStackControl;
-(void)constantPopupChanged:(id)arg1 ;
-(void)contentsChanged:(id)arg1 ;
-(void)colorChanged:(id)arg1 ;
-(void)objectHandleClicked:(id)arg1 ;
-(void)removeObjectClicked:(id)arg1 ;
-(void)popupChanged:(id)arg1 ;
-(id)addUIForFloatProperty:(id)arg1 ofClass:(Class)arg2 ;
-(id)addUIForVec2Property:(id)arg1 ;
-(id)addUIForVec3Property:(id)arg1 ;
-(id)addUIForVec4Property:(id)arg1 ;
-(id)addUIForMat4Property:(id)arg1 ;
-(id)addUIForContentsProperty:(id)arg1 ;
-(id)addUIForImageProperty:(id)arg1 ;
-(id)addUIForColorProperty:(id)arg1 ;
-(id)addUIForArrayProperty:(id)arg1 ofClass:(id)arg2 ;
-(id)addUIForObjectProperty:(id)arg1 ;
-(id)addUIForBoolProperty:(id)arg1 ;
-(id)addUIForStringProperty:(id)arg1 ofClass:(Class)arg2 ;
-(id)addUIForIntProperty:(id)arg1 ofClass:(Class)arg2 ;
-(id)addUIForProperty:(id)arg1 ofClass:(Class)arg2 instance:(id)arg3 ;
-(id)allocationMenuForClass:(Class)arg1 propertyName:(id)arg2 ;
-(void)selectInstance:(id)arg1 propertyName:(id)arg2 ;
-(void)newInstanceMenuClicked:(id)arg1 ;
-(id)pathControlItemForInstance:(id)arg1 ;
-(void)unbind;
-(id)menuItemForInstance:(id)arg1 propertyName:(id)arg2 ;
-(void)instanceNewElementInArray:(id)arg1 withPropertyName:(id)arg2 ;
-(void)array:(id)arg1 didSelect:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)stackSelectionChanged:(id)arg1 ;
-(void)pathControlClicked:(id)arg1 ;
-(NSObjectController *)objectController;
-(void)setObjectController:(NSObjectController *)arg1 ;
-(void)setStackControl:(NSPathControl *)arg1 ;
@end

