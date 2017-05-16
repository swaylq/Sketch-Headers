//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSDocumentData.h"

#import "MSDocumentData.h"
#import "MSLayerContainment.h"

@class BCCache, MSPage, NSArray, NSDictionary, NSSet;

@interface MSDocumentData : _MSDocumentData <MSLayerContainment, MSDocumentData>
{
    long long ignoreLayerSelectionDidChangeNotificationsCounter;
    BOOL _autoExpandGroupsInLayerList;
    BCCache *_cache;
    id <MSDocumentDataDelegate> _delegate;
    NSDictionary *_metadata;
}

+ (void)initialize;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) BOOL autoExpandGroupsInLayerList; // @synthesize autoExpandGroupsInLayerList=_autoExpandGroupsInLayerList;
@property(nonatomic) __weak id <MSDocumentDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BCCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)determineCurrentArtboard;
- (void)refreshOverlayOfViews;
- (void)refreshOverlayInRect:(struct CGRect)arg1;
- (void)immediatelyShowSelectionForAllLayers;
- (void)immediatelyShowSelectionForLayer:(id)arg1;
- (void)temporarilyHideSelectionForLayer:(id)arg1;
- (void)replaceExistingCreationMetadata;
- (void)setEnableSliceInteraction:(BOOL)arg1;
- (void)setEnableLayerInteraction:(BOOL)arg1;
- (id)images;
- (id)sharedObjectContainerOfType:(unsigned long long)arg1;
- (void)enumerateForeignSymbolsWithLibraries:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)libraryForForeignSymbol:(id)arg1 inLibraries:(id)arg2;
- (id)addCopyOfInstanceMasterToDocumentIfNecessary:(id)arg1;
- (void)addSymbolMaster:(id)arg1;
- (id)addCopyOfMasterToDocumentIfNecessary:(id)arg1;
- (id)symbolWithID:(id)arg1;
- (id)allSymbols;
- (id)allArtboards;
- (id)symbolInstancesBySymbolID;
- (void)populateDictionary:(id)arg1 withChildrenOf:(id)arg2;
- (id)layersByObjectID;
- (id)layerWithID:(id)arg1;
- (void)layerTreeLayoutDidChange;
- (void)deselectAllLayers;
- (void)layerSelectionDidChange;
- (void)ignoreLayerSelectionDidChangeNotificationsInBlock:(CDUnknownBlockType)arg1;
- (void)changeSelectionTo:(id)arg1;
- (id)selectedLayers;
- (BOOL)documentIsEmpty;
- (void)sharedObjectDidChange:(struct MSModelObject *)arg1;
- (id)nameForNewPage;
- (id)symbolsPageOrCreateIfNecessary;
- (id)symbolsPage;
- (id)addBlankPage;
- (void)addPage:(id)arg1;
- (void)removePages:(id)arg1 detachInstances:(BOOL)arg2;
@property(retain, nonatomic) MSPage *currentPage;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)documentData;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)objectDidInit;
- (void)performInitEmptyObject;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (id)defaultPagesArray;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (void)replaceFonts:(id)arg1;
@property(readonly, nonatomic) NSSet *unavailableFontNames;
@property(readonly, nonatomic) NSSet *fontNames;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (id)lastLayer;
- (id)firstLayer;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)containsNoOrOneLayers;
- (BOOL)containsLayers;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (id)metadataForKey:(id)arg1 object:(id)arg2;
- (void)storeMetadata:(id)arg1 forKey:(id)arg2 object:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSArray *pages;

@end

