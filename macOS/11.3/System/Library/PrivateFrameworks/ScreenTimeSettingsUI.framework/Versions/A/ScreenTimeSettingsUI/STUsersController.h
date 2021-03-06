/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/Versions/A/ScreenTimeSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class NSImage, NSManagedObjectContext, NSFetchedResultsController, STCoreUser, NSArray, NSString;

@interface STUsersController : NSObject <NSFetchedResultsControllerDelegate> {

	unsigned long long _selectedIndex;
	NSImage* _selectedUserImage;
	NSManagedObjectContext* _managedObjectContext;
	NSFetchedResultsController* _localUserController;
	NSFetchedResultsController* _childUserController;
	NSFetchedResultsController* _settingsController;

}

@property (readonly) NSManagedObjectContext * managedObjectContext;                         //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * localUserController;              //@synthesize localUserController=_localUserController - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * childUserController;              //@synthesize childUserController=_childUserController - In the implementation block
@property (retain) NSFetchedResultsController * settingsController;                         //@synthesize settingsController=_settingsController - In the implementation block
@property (copy) NSImage * selectedUserImage;                                               //@synthesize selectedUserImage=_selectedUserImage - In the implementation block
@property (readonly) STCoreUser * localUser; 
@property (copy,readonly) NSArray * users; 
@property (assign,nonatomic) unsigned long long selectedIndex;                              //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (readonly) STCoreUser * selectedUser; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingLocalUser;
+(id)keyPathsForValuesAffectingUsers;
+(id)keyPathsForValuesAffectingSelectedUser;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(unsigned long long)selectedIndex;
-(NSManagedObjectContext *)managedObjectContext;
-(NSArray *)users;
-(void)refresh;
-(id)initWithManagedObjectContext:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(STCoreUser *)localUser;
-(NSFetchedResultsController *)settingsController;
-(void)setSettingsController:(NSFetchedResultsController *)arg1 ;
-(STCoreUser *)selectedUser;
-(NSFetchedResultsController *)localUserController;
-(NSFetchedResultsController *)childUserController;
-(void)refreshSelectedUserImage;
-(void)setSelectedUserImage:(NSImage *)arg1 ;
-(void)setLocalUserController:(NSFetchedResultsController *)arg1 ;
-(void)setChildUserController:(NSFetchedResultsController *)arg1 ;
-(void)notifyServerOfScreenTimeEnabled:(char)arg1 forUser:(id)arg2 ;
-(NSImage *)selectedUserImage;
@end

