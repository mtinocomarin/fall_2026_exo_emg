// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\prune_9\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemgoverthefall\testfile\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.07%
// test_accuracy: 70.72%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt']}
// generated: 2026-02-13 14:47:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.197912, 0.197558,
    -0.135962, 0.136705,
    0.037154, -0.037238,
    0.184559, -0.184930,
    1.360642, -1.360560,
    -0.901137, 0.900924,
    -0.053744, 0.053809,
    0.072528, -0.072481,
    -0.481618, 0.481637,
    -0.300300, 0.300326,
    0.423965, -0.423998,
    0.912514, -0.912568,
};

float Cg_init[2] = {
    -0.440590, -0.440585
};

float xstd_init[12] = {
    0.000932, 0.000073, 0.008092, 0.064292, 0.000664, 0.000101, 0.013096, 0.049504, 0.003142, 0.000997, 0.117459, 0.207124
};

float xmean_init[12] = {
    0.005517, -0.007759, 0.002136, 0.090710, 0.002320, -0.007861, 0.003875, 0.042289, 0.008819, -0.006612, 0.133944, 0.475835
};

