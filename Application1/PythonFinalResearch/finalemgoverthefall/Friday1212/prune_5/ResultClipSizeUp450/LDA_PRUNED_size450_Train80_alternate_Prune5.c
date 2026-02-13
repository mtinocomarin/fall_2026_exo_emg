// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 82.18%
// test_accuracy: 75.00%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 15:48:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.791301, 0.791301,
    -0.244953, 0.244956,
    0.472702, -0.472744,
    0.847749, -0.847719,
    0.942197, -0.942317,
    -1.046729, 1.046909,
    0.033120, -0.033152,
    -0.035212, 0.035184,
    -0.505258, 0.505235,
    0.462409, -0.462239,
    -0.488931, 0.488880,
    0.257251, -0.257346,
};

float Cg_init[2] = {
    -0.397310, -0.397319
};

float xstd_init[12] = {
    0.003671, 0.001369, 0.102952, 0.174642, 0.001564, 0.000474, 0.028009, 0.079487, 0.001480, 0.000091, 0.018255, 0.065464
};

float xmean_init[12] = {
    0.009785, -0.006247, 0.173396, 0.580555, 0.003140, -0.007744, 0.006481, 0.046389, 0.003255, -0.007805, 0.004630, 0.068519
};

