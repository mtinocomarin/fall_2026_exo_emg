// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.57%
// test_accuracy: 72.16%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:47:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.652735, 0.652706,
    -0.186972, 0.187025,
    0.353470, -0.353506,
    0.680488, -0.680476,
    0.684479, -0.684526,
    -0.863129, 0.863212,
    0.016570, -0.016598,
    0.008360, -0.008373,
    -0.459289, 0.459320,
    0.403713, -0.403725,
    -0.374257, 0.374268,
    0.157784, -0.157799,
};

float Cg_init[2] = {
    -0.289656, -0.289669
};

float xstd_init[12] = {
    0.003816, 0.001413, 0.108513, 0.170336, 0.001488, 0.000431, 0.025151, 0.075885, 0.001691, 0.000091, 0.016205, 0.065262
};

float xmean_init[12] = {
    0.009849, -0.006218, 0.175585, 0.588767, 0.003145, -0.007746, 0.005974, 0.048766, 0.003250, -0.007808, 0.004416, 0.066624
};

