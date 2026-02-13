// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_14\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 95.00%
// test_accuracy: 87.50%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_32.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt', 'act2\\trial_6.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_28.txt', 'act2\\trial_34.txt']}
// generated: 2025-12-12 16:09:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.025573, 1.025589,
    -0.563221, 0.563205,
    1.201643, -1.201648,
    1.059363, -1.059361,
    1.770844, -1.770816,
    -2.929335, 2.929294,
    0.646407, -0.646393,
    0.017457, -0.017453,
    1.141490, -1.141495,
    -0.325415, 0.325398,
    -0.470811, 0.470815,
    0.469326, -0.469312,
};

float Cg_init[2] = {
    -1.141240, -1.141239
};

float xstd_init[12] = {
    0.003647, 0.001320, 0.097568, 0.172099, 0.001792, 0.000574, 0.032783, 0.092068, 0.000555, 0.000087, 0.016115, 0.060340
};

float xmean_init[12] = {
    0.009852, -0.006252, 0.168485, 0.577273, 0.003388, -0.007665, 0.008242, 0.057636, 0.003159, -0.007807, 0.005091, 0.065818
};

