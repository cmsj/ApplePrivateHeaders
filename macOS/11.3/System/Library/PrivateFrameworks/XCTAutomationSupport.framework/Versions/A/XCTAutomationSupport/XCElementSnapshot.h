/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <XCTAutomationSupport/XCTAutomationSupport-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol XCUIElementSnapshotApplication, XCTElementSnapshotAttributeDataSource;
@class NSString, NSArray, NSDictionary, NSSet, NSValue, XCAccessibilityElement, NSEnumerator, NSIndexPath;

@interface XCElementSnapshot : NSObject <NSSecureCoding, NSCopying> {

	char _isMainWindow;
	char _enabled;
	char _selected;
	char _hasFocus;
	char _hasKeyboardFocus;
	char _isTruncatedValue;
	char _hasPrivilegedAttributeValues;
	unsigned _faultedInProperties;
	id<XCUIElementSnapshotApplication> _application;
	unsigned long long _generation;
	id<XCTElementSnapshotAttributeDataSource> _dataSource;
	long long _displayID;
	NSString* _title;
	NSString* _label;
	id _value;
	NSString* _placeholderValue;
	unsigned long long _elementType;
	unsigned long long _traits;
	NSString* _identifier;
	long long _verticalSizeClass;
	long long _horizontalSizeClass;
	NSArray* _children;
	NSDictionary* _additionalAttributes;
	NSArray* _userTestingAttributes;
	NSSet* _disclosedChildRowAXElements;
	NSValue* _activationPoint;
	XCAccessibilityElement* _proxyAccessibilityElement;
	XCAccessibilityElement* _titleUIAccessibilityElement;
	XCAccessibilityElement* _windowCloseAccessibilityElement;
	XCAccessibilityElement* _windowMinimizeAccessibilityElement;
	XCAccessibilityElement* _windowZoomAccessibilityElement;
	XCAccessibilityElement* _accessibilityElement;
	XCAccessibilityElement* _parentAccessibilityElement;
	XCElementSnapshot* _parent;
	CGRect _frame;

}

@property (assign) long long horizontalSizeClass;                                                //@synthesize horizontalSizeClass=_horizontalSizeClass - In the implementation block
@property (assign) long long verticalSizeClass;                                                  //@synthesize verticalSizeClass=_verticalSizeClass - In the implementation block
@property (assign) char isTruncatedValue;                                                        //@synthesize isTruncatedValue=_isTruncatedValue - In the implementation block
@property (assign) unsigned faultedInProperties;                                                 //@synthesize faultedInProperties=_faultedInProperties - In the implementation block
@property (readonly) char isMacOS; 
@property (nonatomic,copy,readonly) XCAccessibilityElement * accessibilityElement;               //@synthesize accessibilityElement=_accessibilityElement - In the implementation block
@property (retain) XCAccessibilityElement * parentAccessibilityElement;                          //@synthesize parentAccessibilityElement=_parentAccessibilityElement - In the implementation block
@property (__weak) XCElementSnapshot * parent;                                                   //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic,__weak) id<XCUIElementSnapshotApplication> application;              //@synthesize application=_application - In the implementation block
@property (copy) NSArray * children;                                                             //@synthesize children=_children - In the implementation block
@property (assign) CGRect frame;                                                                 //@synthesize frame=_frame - In the implementation block
@property (assign) long long displayID;                                                          //@synthesize displayID=_displayID - In the implementation block
@property (readonly) NSSet * uniqueDescendantSubframes; 
@property (copy) NSValue * activationPoint;                                                      //@synthesize activationPoint=_activationPoint - In the implementation block
@property (copy) XCAccessibilityElement * titleUIAccessibilityElement;                           //@synthesize titleUIAccessibilityElement=_titleUIAccessibilityElement - In the implementation block
@property (copy) XCAccessibilityElement * proxyAccessibilityElement;                             //@synthesize proxyAccessibilityElement=_proxyAccessibilityElement - In the implementation block
@property (copy) XCAccessibilityElement * windowCloseAccessibilityElement;                       //@synthesize windowCloseAccessibilityElement=_windowCloseAccessibilityElement - In the implementation block
@property (copy) XCAccessibilityElement * windowMinimizeAccessibilityElement;                    //@synthesize windowMinimizeAccessibilityElement=_windowMinimizeAccessibilityElement - In the implementation block
@property (copy) XCAccessibilityElement * windowZoomAccessibilityElement;                        //@synthesize windowZoomAccessibilityElement=_windowZoomAccessibilityElement - In the implementation block
@property (assign) char isMainWindow;                                                            //@synthesize isMainWindow=_isMainWindow - In the implementation block
@property (copy) NSString * identifier;                                                          //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * title;                                                               //@synthesize title=_title - In the implementation block
@property (assign) unsigned long long traits;                                                    //@synthesize traits=_traits - In the implementation block
@property (getter=isEnabled) char enabled;                                                       //@synthesize enabled=_enabled - In the implementation block
@property (getter=isSelected) char selected;                                                     //@synthesize selected=_selected - In the implementation block
@property (copy) NSString * label;                                                               //@synthesize label=_label - In the implementation block
@property (copy) id value;                                                                       //@synthesize value=_value - In the implementation block
@property (copy) NSString * placeholderValue;                                                    //@synthesize placeholderValue=_placeholderValue - In the implementation block
@property (copy) NSArray * userTestingAttributes;                                                //@synthesize userTestingAttributes=_userTestingAttributes - In the implementation block
@property (copy) NSDictionary * additionalAttributes;                                            //@synthesize additionalAttributes=_additionalAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long generation;                                      //@synthesize generation=_generation - In the implementation block
@property (assign) char hasPrivilegedAttributeValues;                                            //@synthesize hasPrivilegedAttributeValues=_hasPrivilegedAttributeValues - In the implementation block
@property (readonly) char anyDescendantHasPrivilegedAttributeValues; 
@property (copy,readonly) XCElementSnapshot * pathFromRoot; 
@property (assign) char hasKeyboardFocus;                                                        //@synthesize hasKeyboardFocus=_hasKeyboardFocus - In the implementation block
@property (assign) char hasFocus;                                                                //@synthesize hasFocus=_hasFocus - In the implementation block
@property (readonly) char isRemote; 
@property (copy,readonly) NSEnumerator * childEnumerator; 
@property (copy,readonly) NSEnumerator * descendantEnumerator; 
@property (readonly) XCElementSnapshot * rootElement; 
@property (copy,readonly) NSString * pathDescription; 
@property (copy,readonly) NSString * sparseTreeDescription; 
@property (copy,readonly) NSString * compactDescription; 
@property (copy,readonly) NSIndexPath * indexPath; 
@property (readonly) unsigned long long depth; 
@property (copy,readonly) NSArray * identifiers; 
@property (copy,readonly) NSString * truncatedValueString; 
@property (readonly) XCElementSnapshot * scrollView; 
@property (readonly) XCElementSnapshot * menu; 
@property (readonly) XCElementSnapshot * menuItem; 
@property (readonly) char isInRootMenu; 
@property (readonly) XCElementSnapshot * outline; 
@property (readonly) NSArray * disclosedChildRows; 
@property (copy) NSSet * disclosedChildRowAXElements;                                            //@synthesize disclosedChildRowAXElements=_disclosedChildRowAXElements - In the implementation block
@property (readonly) CGRect visibleFrame; 
@property (readonly) CGPoint center; 
@property (readonly) double centerX; 
@property (readonly) double centerY; 
@property (readonly) char isTouchBarElement; 
@property (readonly) char isTopLevelTouchBarElement; 
@property (__weak) id<XCTElementSnapshotAttributeDataSource> dataSource;                         //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) unsigned long long elementType;                                               //@synthesize elementType=_elementType - In the implementation block
@property (readonly) NSString * recursiveDescription; 
@property (readonly) NSString * recursiveDescriptionIncludingAccessibilityElement; 
+(char)supportsSecureCoding;
+(id)axAttributesForElementSnapshotKeyPaths:(id)arg1 isMacOS:(char)arg2 ;
+(id)requiredAXAttributesForElementSnapshotHierarchyOnMacOS:(char)arg1 ;
+(unsigned long long)elementTypeForAccessibilityElement:(id)arg1 usingAXAttributes_macOS:(id)arg2 macCatalystStatusProvider:(id)arg3 useLegacyElementType:(char)arg4 ;
+(unsigned long long)elementTypeForAccessibilityElement:(id)arg1 usingAXAttributes_iOS:(id)arg2 useLegacyElementType:(char)arg3 ;
+(id)elementWithAccessibilityElement:(id)arg1 ;
+(id)axAttributesForFaultingPropertiesOnMacOS:(char)arg1 ;
+(id)sanitizedElementSnapshotHierarchyAttributesForAttributes:(id)arg1 isMacOS:(char)arg2 ;
+(id)axAttributesForSnapshotAttributes:(id)arg1 isMacOS:(char)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)generation;
-(void)setEnabled:(char)arg1 ;
-(NSString *)identifier;
-(char)isEnabled;
-(id)value;
-(id<XCUIElementSnapshotApplication>)application;
-(void)setTitle:(NSString *)arg1 ;
-(XCElementSnapshot *)menu;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(XCElementSnapshot *)parent;
-(unsigned long long)depth;
-(unsigned long long)elementType;
-(void)setValue:(id)arg1 ;
-(NSIndexPath *)indexPath;
-(XCElementSnapshot *)rootElement;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(NSString *)title;
-(char)isRemote;
-(long long)displayID;
-(CGRect)visibleFrame;
-(CGRect)frame;
-(void)setFrame:(CGRect)arg1 ;
-(id<XCTElementSnapshotAttributeDataSource>)dataSource;
-(void)setDataSource:(id<XCTElementSnapshotAttributeDataSource>)arg1 ;
-(XCElementSnapshot *)scrollView;
-(CGPoint)center;
-(XCAccessibilityElement *)accessibilityElement;
-(char)isMainWindow;
-(XCElementSnapshot *)menuItem;
-(NSString *)recursiveDescription;
-(void)setSelected:(char)arg1 ;
-(char)isSelected;
-(NSArray *)identifiers;
-(double)centerX;
-(double)centerY;
-(unsigned long long)traits;
-(void)setTraits:(unsigned long long)arg1 ;
-(void)setParent:(XCElementSnapshot *)arg1 ;
-(NSString *)compactDescription;
-(void)setHasFocus:(char)arg1 ;
-(void)setElementType:(unsigned long long)arg1 ;
-(char)hasKeyboardFocus;
-(void)setHasKeyboardFocus:(char)arg1 ;
-(void)setAdditionalAttributes:(NSDictionary *)arg1 ;
-(void)setGeneration:(unsigned long long)arg1 ;
-(XCElementSnapshot *)outline;
-(char)hasFocus;
-(void)setDisplayID:(long long)arg1 ;
-(NSDictionary *)additionalAttributes;
-(void)setApplication:(id<XCUIElementSnapshotApplication>)arg1 ;
-(long long)verticalSizeClass;
-(long long)horizontalSizeClass;
-(char)isMacOS;
-(NSEnumerator *)childEnumerator;
-(void)setActivationPoint:(NSValue *)arg1 ;
-(NSValue *)activationPoint;
-(char)hasDescendantMatchingFilter:(/*^block*/id)arg1 ;
-(void)_assertForFaultsInContext:(/*^block*/id)arg1 ;
-(id)initWithAccessibilityElement:(id)arg1 ;
-(NSString *)truncatedValueString;
-(NSString *)placeholderValue;
-(void)setParentAccessibilityElement:(XCAccessibilityElement *)arg1 ;
-(void)setPlaceholderValue:(NSString *)arg1 ;
-(void)setUserTestingAttributes:(NSArray *)arg1 ;
-(void)setIsMainWindow:(char)arg1 ;
-(void)setVerticalSizeClass:(long long)arg1 ;
-(void)setHorizontalSizeClass:(long long)arg1 ;
-(void)setDisclosedChildRowAXElements:(NSSet *)arg1 ;
-(void)setHasPrivilegedAttributeValues:(char)arg1 ;
-(XCAccessibilityElement *)parentAccessibilityElement;
-(char)_isFaultedIn:(int)arg1 ;
-(NSArray *)userTestingAttributes;
-(NSSet *)disclosedChildRowAXElements;
-(char)hasPrivilegedAttributeValues;
-(void)recursivelyClearDataSource;
-(void)_unsetIsFaultedIn:(int)arg1 ;
-(void)_recursivelyResetElementType;
-(char)_willAssertOnFault;
-(void)_recursivelySetFaultedBits:(int)arg1 ;
-(int)_faultingBitForKey:(id)arg1 ;
-(id)_fetchSimpleValueForKey:(id)arg1 ;
-(char)_shouldAttemptFaultForBit:(int)arg1 ;
-(void)_setIsFaultedIn:(int)arg1 ;
-(id)nearestAncestorMatchingType:(long long)arg1 ;
-(void)setTitleUIAccessibilityElement:(XCAccessibilityElement *)arg1 ;
-(void)setProxyAccessibilityElement:(XCAccessibilityElement *)arg1 ;
-(void)setWindowCloseAccessibilityElement:(XCAccessibilityElement *)arg1 ;
-(void)setWindowMinimizeAccessibilityElement:(XCAccessibilityElement *)arg1 ;
-(void)setWindowZoomAccessibilityElement:(XCAccessibilityElement *)arg1 ;
-(char)isTruncatedValue;
-(void)setIsTruncatedValue:(char)arg1 ;
-(char)_shouldAttemptPrivilegedFaultForValue:(id)arg1 ;
-(id)_fetchPrivilegedValueForKey:(id)arg1 ;
-(char)_fetchBoolForKey:(id)arg1 ;
-(void)enumerateDescendantsUsingBlock:(/*^block*/id)arg1 ;
-(id)descriptionIncludingPointers:(char)arg1 ;
-(id)recursiveDescriptionWithIndent:(id)arg1 includeAccessibilityElement:(char)arg2 includingPointers:(char)arg3 ;
-(char)_isAncestorOfElement:(id)arg1 ;
-(id)dictionaryRepresentationWithAttributes:(id)arg1 ;
-(id)descendantsByFilteringWithBlock:(/*^block*/id)arg1 ;
-(char)_matchesElement:(id)arg1 ;
-(id)_childMatchingElement:(id)arg1 ;
-(void)mergeTreeWithSnapshot:(id)arg1 ;
-(char)matchesTreeWithRoot:(id)arg1 ;
-(XCElementSnapshot *)pathFromRoot;
-(NSString *)recursiveDescriptionIncludingAccessibilityElement;
-(id)elementSnapshotMatchingAccessibilityElement:(id)arg1 ;
-(id)descendantAtIndexPath:(id)arg1 ;
-(char)_isDescendantOfElement:(id)arg1 ;
-(char)_frameFuzzyMatchesElement:(id)arg1 ;
-(char)_frameFuzzyMatchesElement:(id)arg1 tolerance:(double)arg2 ;
-(id)_nearestAncestorMatchingAnyOfTypes:(id)arg1 ;
-(char)isTopLevelTouchBarElement;
-(char)isTouchBarElement;
-(void)_compensateForInsufficientElementTypeData;
-(void)markAsFaultedInPropertiesDerivedFromSnapshotAttributes:(id)arg1 ;
-(XCAccessibilityElement *)titleUIAccessibilityElement;
-(XCAccessibilityElement *)proxyAccessibilityElement;
-(XCAccessibilityElement *)windowCloseAccessibilityElement;
-(XCAccessibilityElement *)windowMinimizeAccessibilityElement;
-(XCAccessibilityElement *)windowZoomAccessibilityElement;
-(char)anyDescendantHasPrivilegedAttributeValues;
-(NSString *)pathDescription;
-(NSString *)sparseTreeDescription;
-(NSEnumerator *)descendantEnumerator;
-(id)_allDescendants;
-(id)sparseTreeWithDescendants:(id)arg1 error:(id*)arg2 ;
-(void)replaceDescendant:(id)arg1 withElement:(id)arg2 ;
-(char)_fuzzyMatchesElement:(id)arg1 ;
-(id)nearestSharedAncestorOfElement:(id)arg1 matchingType:(long long)arg2 ;
-(char)isInRootMenu;
-(NSArray *)disclosedChildRows;
-(NSSet *)uniqueDescendantSubframes;
-(unsigned)faultedInProperties;
-(void)setFaultedInProperties:(unsigned)arg1 ;
@end
