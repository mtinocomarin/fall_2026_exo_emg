// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 92.95%
// test_accuracy: 87.50%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_17.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_31.txt', 'act2\\trial_6.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 16:07:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.154458, 1.154471,
    -0.421233, 0.421225,
    1.315241, -1.315233,
    0.758643, -0.758654,
    2.144267, -2.144302,
    -2.592725, 2.592760,
    0.344559, -0.344568,
    -0.036797, 0.036804,
    1.258204, -1.258170,
    -0.515784, 0.515718,
    -0.606361, 0.606376,
    0.463157, -0.463134,
};

float Cg_init[2] = {
    -1.081956, -1.081952
};

float xstd_init[12] = {
    0.003456, 0.001216, 0.094006, 0.159417, 0.001657, 0.000534, 0.027692, 0.081128, 0.000572, 0.000103, 0.018530, 0.067897
};

float xmean_init[12] = {
    0.009782, -0.006255, 0.161880, 0.572821, 0.003285, -0.007689, 0.007350, 0.052564, 0.003190, -0.007800, 0.005299, 0.071282
};

