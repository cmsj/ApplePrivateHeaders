/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TSAUIState.h>

@class TSKSelectionPath, NSDictionary, NSString, TSKAnnotationAuthor, TSDFreehandDrawingToolkitUIState, TSKPencilAnnotationUIState;

@interface TPUIState : NSObject <NSCopying, TSAUIState> {

	double _presentationAutoScrollSpeed;
	long long _viewScaleModeiOS;
	char _editingDisabled;
	char _masterDrawablesSelectable;
	char _rulersVisible;
	char _layoutBordersVisible;
	char _wordCountHUDVisible;
	char _showsComments;
	char _hasShowsCTMarkup;
	char _showsCTMarkup;
	char _hasShowsCTDeletions;
	char _showsCTDeletions;
	char _changeTrackingPaused;
	char _showsPageNavigator;
	char _showsTOCNavigator;
	char _pencilAnnotationsHidden;
	char _shouldShowCommentSidebar;
	char _inspectorHidden;
	char _showUserDefinedGuides;
	char _showUserDefinedMasterGuides;
	int _wordCountHUDType;
	TSKSelectionPath* _selectionPath;
	NSDictionary* _chartUIState;
	long long _viewScaleMode;
	long long _pageViewState;
	double _viewScale;
	NSString* _selectedInspectorSwitchSegmentIdentifier;
	NSString* _authorForFilteringName;
	TSKAnnotationAuthor* _authorForFiltering;
	TSDFreehandDrawingToolkitUIState* _freehandDrawingToolkitUIState;
	TSKPencilAnnotationUIState* _pencilAnnotationUIState;
	CGPoint _wordCountHUDPosition;
	CGRect _visibleRect;
	CGRect _windowFrame;

}

@property (assign,nonatomic) CGRect visibleRect;                                                            //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) char masterDrawablesSelectable;                                                //@synthesize masterDrawablesSelectable=_masterDrawablesSelectable - In the implementation block
@property (nonatomic,copy) NSDictionary * chartUIState;                                                     //@synthesize chartUIState=_chartUIState - In the implementation block
@property (assign,nonatomic) char rulersVisible;                                                            //@synthesize rulersVisible=_rulersVisible - In the implementation block
@property (assign,nonatomic) char layoutBordersVisible;                                                     //@synthesize layoutBordersVisible=_layoutBordersVisible - In the implementation block
@property (assign,nonatomic) char wordCountHUDVisible;                                                      //@synthesize wordCountHUDVisible=_wordCountHUDVisible - In the implementation block
@property (assign,nonatomic) int wordCountHUDType;                                                          //@synthesize wordCountHUDType=_wordCountHUDType - In the implementation block
@property (assign,nonatomic) CGPoint wordCountHUDPosition;                                                  //@synthesize wordCountHUDPosition=_wordCountHUDPosition - In the implementation block
@property (assign,nonatomic) char showsComments;                                                            //@synthesize showsComments=_showsComments - In the implementation block
@property (nonatomic,readonly) char hasShowsCTMarkup;                                                       //@synthesize hasShowsCTMarkup=_hasShowsCTMarkup - In the implementation block
@property (assign,nonatomic) char showsCTMarkup;                                                            //@synthesize showsCTMarkup=_showsCTMarkup - In the implementation block
@property (nonatomic,readonly) char hasShowsCTDeletions;                                                    //@synthesize hasShowsCTDeletions=_hasShowsCTDeletions - In the implementation block
@property (assign,nonatomic) char showsCTDeletions;                                                         //@synthesize showsCTDeletions=_showsCTDeletions - In the implementation block
@property (assign,nonatomic) char changeTrackingPaused;                                                     //@synthesize changeTrackingPaused=_changeTrackingPaused - In the implementation block
@property (assign,nonatomic) char showsPageNavigator;                                                       //@synthesize showsPageNavigator=_showsPageNavigator - In the implementation block
@property (assign,nonatomic) char showsTOCNavigator;                                                        //@synthesize showsTOCNavigator=_showsTOCNavigator - In the implementation block
@property (assign,nonatomic) char pencilAnnotationsHidden;                                                  //@synthesize pencilAnnotationsHidden=_pencilAnnotationsHidden - In the implementation block
@property (assign,nonatomic) char shouldShowCommentSidebar;                                                 //@synthesize shouldShowCommentSidebar=_shouldShowCommentSidebar - In the implementation block
@property (assign,nonatomic) long long viewScaleMode;                                                       //@synthesize viewScaleMode=_viewScaleMode - In the implementation block
@property (assign,nonatomic) long long pageViewState;                                                       //@synthesize pageViewState=_pageViewState - In the implementation block
@property (assign,nonatomic) double viewScale;                                                              //@synthesize viewScale=_viewScale - In the implementation block
@property (assign,nonatomic) CGRect windowFrame;                                                            //@synthesize windowFrame=_windowFrame - In the implementation block
@property (nonatomic,copy) NSString * selectedInspectorSwitchSegmentIdentifier;                             //@synthesize selectedInspectorSwitchSegmentIdentifier=_selectedInspectorSwitchSegmentIdentifier - In the implementation block
@property (assign,nonatomic) char inspectorHidden;                                                          //@synthesize inspectorHidden=_inspectorHidden - In the implementation block
@property (assign,nonatomic) char showUserDefinedGuides;                                                    //@synthesize showUserDefinedGuides=_showUserDefinedGuides - In the implementation block
@property (nonatomic,copy) NSString * authorForFilteringName;                                               //@synthesize authorForFilteringName=_authorForFilteringName - In the implementation block
@property (nonatomic,retain) TSKAnnotationAuthor * authorForFiltering;                                      //@synthesize authorForFiltering=_authorForFiltering - In the implementation block
@property (nonatomic,retain) TSDFreehandDrawingToolkitUIState * freehandDrawingToolkitUIState;              //@synthesize freehandDrawingToolkitUIState=_freehandDrawingToolkitUIState - In the implementation block
@property (nonatomic,retain) TSKPencilAnnotationUIState * pencilAnnotationUIState;                          //@synthesize pencilAnnotationUIState=_pencilAnnotationUIState - In the implementation block
@property (assign,nonatomic) char showUserDefinedMasterGuides;                                              //@synthesize showUserDefinedMasterGuides=_showUserDefinedMasterGuides - In the implementation block
@property (assign,nonatomic) char editingDisabled;                                                          //@synthesize editingDisabled=_editingDisabled - In the implementation block
@property (nonatomic,copy) TSKSelectionPath * selectionPath;                                                //@synthesize selectionPath=_selectionPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(CGRect)visibleRect;
-(char)rulersVisible;
-(void)setRulersVisible:(char)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(double)viewScale;
-(char)showsComments;
-(void)setShowsComments:(char)arg1 ;
-(id)initWithArchive:(const UIStateArchive*)arg1 unarchiver:(id)arg2 ;
-(CGRect)windowFrame;
-(TSDFreehandDrawingToolkitUIState *)freehandDrawingToolkitUIState;
-(id)archivedUIStateInContext:(id)arg1 ;
-(id)UIStateForChart:(id)arg1 ;
-(void)setUIState:(id)arg1 forChart:(id)arg2 ;
-(TSKSelectionPath *)selectionPath;
-(void)setSelectionPath:(TSKSelectionPath *)arg1 ;
-(char)editingDisabled;
-(void)resetForInitialViewing;
-(void)setEditingDisabled:(char)arg1 ;
-(void)saveToArchive:(UIStateArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(void)setFreehandDrawingToolkitUIState:(TSDFreehandDrawingToolkitUIState *)arg1 ;
-(NSDictionary *)chartUIState;
-(char)isEqualToUIState:(id)arg1 ;
-(void)setShowsCTMarkup:(char)arg1 ;
-(void)setShowsCTDeletions:(char)arg1 ;
-(char)masterDrawablesSelectable;
-(void)setMasterDrawablesSelectable:(char)arg1 ;
-(void)setChartUIState:(NSDictionary *)arg1 ;
-(char)layoutBordersVisible;
-(void)setLayoutBordersVisible:(char)arg1 ;
-(char)wordCountHUDVisible;
-(void)setWordCountHUDVisible:(char)arg1 ;
-(int)wordCountHUDType;
-(void)setWordCountHUDType:(int)arg1 ;
-(CGPoint)wordCountHUDPosition;
-(void)setWordCountHUDPosition:(CGPoint)arg1 ;
-(char)hasShowsCTMarkup;
-(char)showsCTMarkup;
-(char)hasShowsCTDeletions;
-(char)showsCTDeletions;
-(char)changeTrackingPaused;
-(void)setChangeTrackingPaused:(char)arg1 ;
-(char)showsPageNavigator;
-(void)setShowsPageNavigator:(char)arg1 ;
-(char)showsTOCNavigator;
-(void)setShowsTOCNavigator:(char)arg1 ;
-(char)pencilAnnotationsHidden;
-(void)setPencilAnnotationsHidden:(char)arg1 ;
-(char)shouldShowCommentSidebar;
-(void)setShouldShowCommentSidebar:(char)arg1 ;
-(long long)viewScaleMode;
-(void)setViewScaleMode:(long long)arg1 ;
-(long long)pageViewState;
-(void)setPageViewState:(long long)arg1 ;
-(void)setWindowFrame:(CGRect)arg1 ;
-(NSString *)selectedInspectorSwitchSegmentIdentifier;
-(void)setSelectedInspectorSwitchSegmentIdentifier:(NSString *)arg1 ;
-(char)inspectorHidden;
-(void)setInspectorHidden:(char)arg1 ;
-(char)showUserDefinedGuides;
-(void)setShowUserDefinedGuides:(char)arg1 ;
-(NSString *)authorForFilteringName;
-(void)setAuthorForFilteringName:(NSString *)arg1 ;
-(TSKAnnotationAuthor *)authorForFiltering;
-(void)setAuthorForFiltering:(TSKAnnotationAuthor *)arg1 ;
-(TSKPencilAnnotationUIState *)pencilAnnotationUIState;
-(void)setPencilAnnotationUIState:(TSKPencilAnnotationUIState *)arg1 ;
-(char)showUserDefinedMasterGuides;
-(void)setShowUserDefinedMasterGuides:(char)arg1 ;
@end

