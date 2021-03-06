/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/NSViewController.h>

@class AMPluginHeaderViewController, AMWorkflow, AMWorkflowHeaderView;

@interface AMHeaderViewController : NSViewController {

	AMPluginHeaderViewController* _pluginHeaderViewController;
	AMWorkflow* _workflow;
	AMWorkflowHeaderView* _workflowHeaderView;

}

@property (retain) AMPluginHeaderViewController * pluginHeaderViewController;              //@synthesize pluginHeaderViewController=_pluginHeaderViewController - In the implementation block
@property (retain) AMWorkflowHeaderView * workflowHeaderView;                              //@synthesize workflowHeaderView=_workflowHeaderView - In the implementation block
@property (nonatomic,retain) AMWorkflow * workflow; 
+(char)hasHeaderViewForPersonality:(id)arg1 ;
-(void)dealloc;
-(void)update;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadView;
-(AMWorkflow *)workflow;
-(void)setWorkflow:(AMWorkflow *)arg1 ;
-(AMPluginHeaderViewController *)pluginHeaderViewController;
-(void)setPluginHeaderViewController:(AMPluginHeaderViewController *)arg1 ;
-(void)setWorkflowHeaderView:(AMWorkflowHeaderView *)arg1 ;
-(void)updateHeaderConnectionDrawing;
-(AMWorkflowHeaderView *)workflowHeaderView;
@end

