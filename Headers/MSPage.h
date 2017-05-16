//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSPage.h"

#import "MSCloudExportable.h"
#import "MSRootLayer.h"

@class MSArtboardGroup, MSLayer<MSRootLayer>, MSLayoutGrid, MSRulerData, MSSimpleGrid, NSArray, NSString;

@interface MSPage : _MSPage <MSCloudExportable, MSRootLayer>
{
    MSArtboardGroup *_currentArtboard;
    NSArray *_cachedExportableLayers;
    NSArray *_cachedArtboards;
}

+ (void)enumerateExportableLayersWithPage:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)page;
@property(retain, nonatomic) NSArray *cachedArtboards; // @synthesize cachedArtboards=_cachedArtboards;
@property(retain, nonatomic) NSArray *cachedExportableLayers; // @synthesize cachedExportableLayers=_cachedExportableLayers;
@property(nonatomic) __weak MSArtboardGroup *currentArtboard; // @synthesize currentArtboard=_currentArtboard;
- (void).cxx_destruct;
- (void)setIsLocked:(BOOL)arg1;
- (BOOL)isLocked;
- (void)setIsVisible:(BOOL)arg1;
- (BOOL)isVisible;
@property(nonatomic) double zoomValue;
@property(nonatomic) struct CGPoint scrollOrigin;
@property(readonly, nonatomic) NSArray *symbols;
- (struct CGPoint)originForNewArtboard;
- (BOOL)hasClickThrough;
- (BOOL)limitsSelectionToBounds;
- (BOOL)containsPoint:(struct CGPoint)arg1 zoomValue:(double)arg2;
@property(readonly, nonatomic) MSRulerData *currentVerticalRulerData;
@property(readonly, nonatomic) MSRulerData *currentHorizontalRulerData;
- (void)moveLayersToArtboards;
- (BOOL)canContainLayer:(id)arg1;
- (void)rectSizeDidChange:(id)arg1;
- (void)changeLayerExpandedTypeToAutomaticIfCollapsed;
@property(readonly, nonatomic) __weak NSArray *artboards;
- (id)parentRoot;
@property(readonly, nonatomic) MSLayer<MSRootLayer> *currentRoot;
- (id)ancestorsAndSelfTransforms;
- (id)parentPage;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (BOOL)resizeToFitChildrenWithOption:(long long)arg1;
- (BOOL)layers:(id)arg1 fitOnArtboard:(id)arg2;
- (id)destinationArtboardForLayers:(id)arg1 artboards:(id)arg2;
- (BOOL)tryToMoveLayerToArtboard:(id)arg1;
- (BOOL)addOrRemoveLayerFromArtboardIfNecessary:(id)arg1;
- (BOOL)tryToMoveLayer:(id)arg1 toArtboards:(id)arg2;
@property(readonly, nonatomic) NSArray *exportableLayers;
@property(readonly, nonatomic) unsigned long long exportableLayersCount;
- (id)symbolLayersInGroup:(id)arg1;
- (id)artboardForSlice:(id)arg1 inArtboards:(id)arg2;
@property(nonatomic) struct CGPoint rulerBase;
- (void)refreshOverlayInRect:(struct CGRect)arg1;
- (id)transform;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (BOOL)canBeContainedByDocument;
- (void)dealloc;
- (id)selectedLayers;
- (id)parentGroup;
- (void)setIsMarkedForCloudExport:(BOOL)arg1;
- (long long)includeForCloudExportState;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfChildren;
- (BOOL)hasChildren;
- (struct CGPoint)scrollOriginToCenterContentInViewBounds:(struct CGRect)arg1;
- (void)adjustRulerDataToTopLeftInViewBounds;
- (BOOL)shouldDrawSelection;
- (BOOL)canBeHovered;
- (id)displayName;
- (id)cloneForDocument:(id)arg1;
- (BOOL)isExportableViaDragAndDrop;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (id)previewImages;
- (void)duplicate:(id)arg1;
- (unsigned long long)displayType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(readonly) Class superclass;
@property(copy, nonatomic) MSRulerData *verticalRulerData;

@end

